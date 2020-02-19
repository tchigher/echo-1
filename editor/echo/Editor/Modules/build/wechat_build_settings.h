#pragma once

#include "build_settings.h"

namespace Echo
{
	class WeChatBuildSettings : public BuildSettings
	{
		ECHO_SINGLETON_CLASS(WeChatBuildSettings, BuildSettings)

	public:
		WeChatBuildSettings();
		virtual ~WeChatBuildSettings();

		// instance
		static WeChatBuildSettings* instance();

		// build
		virtual void build() override;

		// set
		virtual void setOutputDir(const String& outputDir) override;

		// get final result path
		virtual String getFinalResultPath() override;

		// icon res path
		void setIconRes(const ResourcePath& path);
		const ResourcePath& getIconRes() { return m_iconRes; }

	private:
		// output directory
		bool prepare();

		// copy
		void copySrc();
		void copyRes();

		// cmake
		void cmake();

		// compile
		void compile();

		// write config
		void writeModuleConfig();

	private:
		String                  m_rootDir;
		String                  m_projectDir;
		String                  m_outputDir;
		ResourcePath            m_iconRes;
	};
}
