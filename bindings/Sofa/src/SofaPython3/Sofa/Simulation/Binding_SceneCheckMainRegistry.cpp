/******************************************************************************
*                              SofaPython3 plugin                             *
*                  (c) 2021 CNRS, University of Lille, INRIA                  *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include <SofaPython3/Sofa/Simulation/Binding_SceneCheckMainRegistry.h>
#include <SofaPython3/Sofa/Simulation/Binding_SceneCheckMainRegistry_doc.h>
#include <sofa/simulation/SceneCheckMainRegistry.h>
#include <pybind11/stl.h>

namespace sofapython3
{

namespace py { using namespace pybind11; }

void moduleAddSceneCheckMainRegistry(pybind11::module &m)
{
    py::class_<sofa::simulation::SceneCheckMainRegistry> registry (m, "SceneCheckMainRegistry",
        sofapython3::doc::simulation::SceneCheckMainRegistryClass);

    registry.def_static("getRegisteredSceneChecks",
        []() {
            return std::vector(sofa::simulation::SceneCheckMainRegistry::getRegisteredSceneChecks());
        },
        sofapython3::doc::simulation::SceneCheckMainRegistry_getRegisteredSceneChecks);
}

} // namespace sofapython3
