/*!
	@file
	@author		Albert Semenov
	@date		12/2010
*/
#ifndef __I_PROPERTY_FIELD_H__
#define __I_PROPERTY_FIELD_H__

#include <MyGUI.h>

namespace tools
{
	class IPropertyField
	{
	public:
		virtual ~IPropertyField() { }

		virtual void initialise(/*MyGUI::Widget* _parent, */const std::string& _type, MyGUI::Widget* _targetWidget) = 0;

		virtual void setValue(const std::string& _value) = 0;
		virtual void setName(const std::string& _value) = 0;

		virtual MyGUI::IntSize getContentSize() = 0;
		virtual void setCoord(const MyGUI::IntCoord& _coord) = 0;
	};
	
} // namespace tools

#endif // __I_PROPERTY_FIELD_H__
