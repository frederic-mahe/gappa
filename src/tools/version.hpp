#ifndef GAPPA_TOOLS_VERSION_H_
#define GAPPA_TOOLS_VERSION_H_

/*
    gappa - Genesis Applications for Phylogenetic Placement Analysis
    Copyright (C) 2017-2019 Lucas Czech and HITS gGmbH

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Contact:
    Lucas Czech <lucas.czech@h-its.org>
    Exelixis Lab, Heidelberg Institute for Theoretical Studies
    Schloss-Wolfsbrunnenweg 35, D-69118 Heidelberg, Germany
*/

#include <string>

// =================================================================================================
//      Gappa Version
// =================================================================================================

inline std::string gappa_version()
{
    return "v0.5.1"; // #GAPPA_VERSION#
}

inline std::string gappa_header()
{
    return "\
                                              ....      ....  \n\
                                             '' '||.   .||'   \n\
                                                  ||  ||      \n\
                                                  '|.|'       \n\
     ...'   ....   ... ...  ... ...   ....        .|'|.       \n\
    |  ||  '' .||   ||'  ||  ||'  || '' .||      .|'  ||      \n\
     |''   .|' ||   ||    |  ||    | .|' ||     .|'|.  ||     \n\
    '....  '|..'|'. ||...'   ||...'  '|..'|.    '||'    ||:.  \n\
    '....'          ||       ||                               \n\
                   ''''     ''''    " + gappa_version() + ", (c) 2017-2019\n\
                                    by Lucas Czech and Pierre Barbera\n";
}

inline std::string gappa_title()
{
    return "gappa - Genesis Applications for Phylogenetic Placement Analysis";
}

#endif // include guard
