/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2015 Artem Pavlenko, Jean-Francois Doyon
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#include <mapnik/config.hpp>

#pragma GCC diagnostic push
#include <mapnik/warning_ignore.hpp>
#include <boost/python.hpp>
#include <boost/noncopyable.hpp>
#pragma GCC diagnostic pop

#include <mapnik/font_engine_freetype.hpp>

void export_font_engine()
{
    using mapnik::freetype_engine;
    using namespace boost::python;
    class_<freetype_engine, boost::noncopyable>("FontEngine", no_init)
        .def("register_font", &freetype_engine::register_font)
        .def("register_fonts", &freetype_engine::register_fonts)
        .def("face_names", &freetype_engine::face_names)
        .staticmethod("register_font")
        .staticmethod("register_fonts")
        .staticmethod("face_names");
}
