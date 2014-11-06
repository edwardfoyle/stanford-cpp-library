/*
 * File: xmlutils.h
 * ----------------
 * This file contains declarations of utility functions related to processing
 * and extracting information from XML documents.
 * It is a thin wrapper around the third-party RapidXML library (rapidxml*.{h,cpp})
 * so that we don't have to use or remember its unusual templatey syntax.
 * 
 * @author Marty Stepp
 * @version 2014/10/14
 * @since 2014/03/01
 */

#ifndef _xmlutils_h
#define _xmlutils_h

#include <string>
#include <vector>
#include "rapidxml.h"
#include "rapidxml_utils.h"

namespace xmlutils {
    int getAttributeInt(rapidxml::xml_node<>* node, std::string attrName, int defaultValue = 0);
    bool getAttributeBool(rapidxml::xml_node<>* node, std::string attrName, bool defaultValue = false);
    std::string getAttribute(rapidxml::xml_node<>* node, std::string attrName, std::string defaultValue = "");
    std::vector<rapidxml::xml_node<>*> getChildNodes(rapidxml::xml_node<>* node, std::string nodeName = "*");
    bool hasAttribute(rapidxml::xml_node<>* node, std::string attrName);
    rapidxml::xml_node<>* openXmlDocument(std::string filename, std::string documentNode = "*");
} // namespace xmlutils

#endif