
#include "tinyxml2.h"
#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>


using namespace tinyxml2;

class MetroPresetGroup {
    private:
        std::string name;
        XMLDocument doc;
        XMLElement* MetroPresetGroup;
        bool do_countin;
        int countin_type, metro_countin_level, loop_presets
    //std::vector<XMLElement *>& vecMetroPreset
    /// Return the first attribute in the list.
    //const XMLAttribute* FirstAttribute() const {
        //return _rootAttribute;
    //}
    public:

        XMLError LoadXML(std::string& filename = "RL22 12-9-21.tetmetgroup") {

            std::cout << "working!" << std::endl;
            XMLError eResult = this->doc.LoadFile(filename);
            XMLCheckResult(eResult);
            this->MetroPresetGroup = doc.FirstChildElement( "MetroPresetGroup" );
            if (MetroPresetGroup == nullptr)
                return XML_ERROR_PARSING_ELEMENT;
            const char* groupname;
            int countin_type;
            eResult = MetroPresetGroup->QueryIntAttribute("countin_type", &countin_type);
            XMLCheckResult(eResult);
            eResult = MetroPresetGroup->QueryStringAttribute("name", &groupname);

            XMLElement * MetroPreset = MetroPresetGroup->FirstChildElement("MetroPreset");
            while (MetroPreset != nullptr)
            {
                // filler code: replace once understood lol
                // Element->ToElement();
                int iOutListValue;
                eResult = pListElement->QueryIntText(&iOutListValue);
                XMLCheckResult(eResult);
                vecList.push_back(iOutListValue);
                pListElement = pListElement->NextSiblingElement("Item");
            }
            // https://shilohjames.wordpress.com/2014/04/27/tinyxml2-tutorial/

            //printf( "Name: %s\n", title);

            return XML_SUCCESS;
        }

}
