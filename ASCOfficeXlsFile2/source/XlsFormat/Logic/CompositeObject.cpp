#include "precompiled_xls.h"
#include "CompositeObject.h"
#include "BinProcessor.h"


namespace XLS
{;

CompositeObject::CompositeObject()
{
}


CompositeObject::~CompositeObject()
{
}

/*
const bool CompositeObject::doSomething(BinProcessor& proc)
{
	MSXML2::IXMLDOMElementPtr own_tag = XMLSTUFF::createElement(getClassName(), parent);
	
	BinReaderProcessor reader_proc(reader, own_tag, is_mandatory);
	if(loadContent(reader_proc))
	{
		return true;
	}
	parent->removeChild(own_tag); // When nothing was read for this composite. For example, if loadFirstMandatory returns false
	return false;
}

*/

const bool CompositeObject::read(CFStreamCacheReader& reader, BaseObject* parent, const bool is_mandatory)
{
	BinReaderProcessor reader_proc(reader, this, is_mandatory);
	if(loadContentRead(reader_proc))
	{
		parent->add_child(this->clone());
		return true;
	}

	return false;
}




const bool CompositeObject::loadContentRead(BinReaderProcessor& proc)
{
	return loadContent(proc);
}



const bool ABNFParenthesis::read(CFStreamCacheReader& reader, BaseObject* parent, const bool is_mandatory)
{
	BinReaderProcessor reader_proc(reader, parent, is_mandatory);
	bool res = loadContentRead(reader_proc);

	//parent->add_child(this);
	return res;
};



} // namespace XLS
