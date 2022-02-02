// SPDX-License-Identifier: BSD-3-Clause
#include <cstdint>
#include <substrate/crypto/sha512>
#include <catch2/catch.hpp>

using namespace substrate;

TEST_CASE("sha512 std::array<>", "[crypto/sha512]")
{
	crypto::sha512_t hasher{};

	std::array<int32_t, 3> small_input{{ 'n', 'y', 'a' }};
	std::array<uint8_t, 64> small_hash{{
		0x28U, 0x4dU, 0x70U, 0x8eU,
		0xd1U, 0x20U, 0xe6U, 0x43U,
		0x61U, 0x1cU, 0x2eU, 0x81U,
		0x99U, 0x21U, 0x3cU, 0xd1U,
		0x3dU, 0x30U, 0x3dU, 0x8aU,
		0xcdU, 0xe8U, 0x68U, 0xecU,
		0x70U, 0xd8U, 0x68U, 0xffU,
		0xa6U, 0x1dU, 0x33U, 0x9dU,
		0x18U, 0xe4U, 0x19U, 0x67U,
		0x31U, 0x98U, 0xceU, 0xe1U,
		0x49U, 0x14U, 0xd7U, 0x1fU,
		0x75U, 0x14U, 0x21U, 0xb9U,
		0x15U, 0x4bU, 0x83U, 0xc2U,
		0x64U, 0x0bU, 0x3fU, 0xf6U,
		0x14U, 0x48U, 0xefU, 0xfcU,
		0x51U, 0x39U, 0xacU, 0x36U
	}};

	REQUIRE(hasher(small_input) == small_hash);
}
