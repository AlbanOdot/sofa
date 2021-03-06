/***************************************************************************
                          CellProperties.h  -  custom Cell properties
                             -------------------
    auto-generated       : Tuesday 6 July 2004 at 17:5:15
    copyright            : (C) 2001-2004 TIMC (E. Promayon, M. Chabanas)
    email                : Emmanuel.Promayon@imag.fr
    Date                 : $Date: 2004/08/11 14:05:25 $
    Version              : $Revision: 1.6 $
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef CELLPROPERTIES_H
#define CELLPROPERTIES_H

#include "BasicCellProperties.h"

/**
  * This is an automatically generated class for custom Cell properties.
  * It was generated by the <tt>customPhysicalProperties</tt> stylesheet from 
  * the following xml document:
  <pre>
   
        
        
  
  </pre>
  * This class inherits BasicCellProperties.
  * Here is all the specific attributes of Cell properties (custom physical properties)
  *
  * @author Emmanuel Promayon
  * $Revision: 1.6 $
  */
class CellProperties : public BasicCellProperties {
public:
    /** Constructors (do not change) */
    CellProperties(PhysicalModel *p, const StructureProperties::GeometricType t) : BasicCellProperties(p, t) { init(); };
	CellProperties(PhysicalModel *p, const StructureProperties::GeometricType t ,xmlNodePtr node) : BasicCellProperties(p, t, node) { init(); };
    CellProperties(PhysicalModel *p, const StructureProperties::GeometricType t, const unsigned int ind) : BasicCellProperties(p, t, ind){ init(); };
    virtual ~CellProperties();     
           
    /** Print the properties in xml */
    void xmlPrint(std::ostream &);

    /** Set and get method for all the properties */
    void setMyCustomProperty1(const float);
    float getMyCustomProperty1() const;
            
    void setMyCustomProperty2(const int);
    int getMyCustomProperty2() const;
            
    
protected:
                
    virtual void init();
    float myCustomProperty1;
    int myCustomProperty2;
    
};                

// inlines
inline void CellProperties::setMyCustomProperty1(const float value) { myCustomProperty1 = value; }
inline float CellProperties::getMyCustomProperty1() const { return myCustomProperty1; }
inline void CellProperties::setMyCustomProperty2(const int value) { myCustomProperty2 = value; }
inline int CellProperties::getMyCustomProperty2() const { return myCustomProperty2; }

#endif

