#include "shader_editor_module.h"
#include "shader_uniform_config.h"

namespace Echo
{
	DECLARE_MODULE(ShaderEditorModule)

	ShaderEditorModule::ShaderEditorModule()
    {
    }

	ShaderEditorModule::~ShaderEditorModule()
    {

    }

	ShaderEditorModule* ShaderEditorModule::instance()
	{
		static ShaderEditorModule* inst = EchoNew(ShaderEditorModule);
		return inst;
	}

	void ShaderEditorModule::bindMethods()
	{

	}

    void ShaderEditorModule::registerTypes()
    {
		Class::registerType<ShaderUniformConfig>();
    }
}
