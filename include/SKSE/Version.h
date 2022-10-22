#pragma once

namespace SKSE
{
	inline constexpr REL::Version RUNTIME_1_1_47(1, 1, 47, 0);
	inline constexpr REL::Version RUNTIME_1_1_51(1, 1, 51, 0);
	inline constexpr REL::Version RUNTIME_1_2_36(1, 2, 36, 0);
	inline constexpr REL::Version RUNTIME_1_2_39(1, 2, 39, 0);
	inline constexpr REL::Version RUNTIME_1_3_5(1, 3, 5, 0);
	inline constexpr REL::Version RUNTIME_1_3_9(1, 3, 9, 0);
	inline constexpr REL::Version RUNTIME_1_4_2(1, 4, 2, 0);
	inline constexpr REL::Version RUNTIME_1_5_3(1, 5, 3, 0);
	inline constexpr REL::Version RUNTIME_1_5_16(1, 5, 16, 0);
	inline constexpr REL::Version RUNTIME_1_5_23(1, 5, 23, 0);
	inline constexpr REL::Version RUNTIME_1_5_39(1, 5, 39, 0);
	inline constexpr REL::Version RUNTIME_1_5_50(1, 5, 50, 0);
	inline constexpr REL::Version RUNTIME_1_5_53(1, 5, 53, 0);
	inline constexpr REL::Version RUNTIME_1_5_62(1, 5, 62, 0);
	inline constexpr REL::Version RUNTIME_1_5_73(1, 5, 73, 0);
	inline constexpr REL::Version RUNTIME_1_5_80(1, 5, 80, 0);
	inline constexpr REL::Version RUNTIME_1_5_97(1, 5, 97, 0);

	inline constexpr REL::Version RUNTIME_VR_1_4_15(1, 4, 15, 0);
	inline constexpr REL::Version RUNTIME_VR_1_4_15_1(1, 4, 15, 1);
#ifdef SKYRIM_SUPPORT_AE
	inline constexpr REL::Version RUNTIME_1_6_317(1, 6, 317, 0);
	inline constexpr REL::Version RUNTIME_1_6_318(1, 6, 318, 0);
	inline constexpr REL::Version RUNTIME_1_6_323(1, 6, 323, 0);
	inline constexpr REL::Version RUNTIME_1_6_342(1, 6, 342, 0);
	inline constexpr REL::Version RUNTIME_1_6_353(1, 6, 353, 0);
	inline constexpr REL::Version RUNTIME_1_6_629(1, 6, 629, 0);
	inline constexpr REL::Version RUNTIME_1_6_640(1, 6, 640, 0);
	inline constexpr REL::Version RUNTIME_1_6_659(1, 6, 659, 0);
	inline constexpr REL::Version RUNTIME_1_6_678(1, 6, 678, 0);
#endif

#ifdef SKYRIM_SUPPORT_AE
	inline constexpr auto RUNTIME_LATEST = RUNTIME_1_6_640;  // latest for steam
#elif SKYRIMVR
	inline constexpr auto RUNTIME_LATEST = RUNTIME_VR_1_4_15_1;
#else
	inline constexpr auto RUNTIME_LATEST = RUNTIME_1_5_97;
#endif
}
