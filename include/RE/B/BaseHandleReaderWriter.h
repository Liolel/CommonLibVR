#pragma once

#include "RE/I/IHandleReaderWriter.h"

namespace RE::SkyrimScript
{
	class BaseHandleReaderWriter : public RE::BSScript::IHandleReaderWriter
	{
	public:
		inline static auto RTTI = RTTI_SkyrimScript__BaseHandleReaderWriter;
		inline static auto VTABLE = VTABLE_SkyrimScript__BaseHandleReaderWriter;

		~BaseHandleReaderWriter() override;  // 0
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(BaseHandleReaderWriter) == 0x8);
}
