#!/usr/bin/env python


# "RL22 12-9-21.tetmetgroup"


import xml.etree.ElementTree as ET

def parse_xml(filename):
    tree = ET.parse(filename)
    root = tree.getroot()
    items = []
    for item in root.findall('./channel/item'):
        
    # empty news dictionary
    # iterate child elements of item
        for child in item:

            # special checking for namespace object content:media
            if child.tag == '{http://search.yahoo.com/mrss/}content':
                news['media'] = child.attrib['url']
            else:
                news[child.tag] = child.text.encode('utf8')

        # append news dictionary to news items list
        newsitems.append(news)
    
    # return news items list
    return newsitems


