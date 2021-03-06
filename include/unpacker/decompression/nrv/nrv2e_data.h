/**
 * @file include/unpacker/decompression/nrv/nrv2e_data.h
 * @brief Declaration of class for NRV2E compressed data.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#ifndef UNPACKER_DECOMPRESSION_NRV_NRV2E_DATA_H
#define UNPACKER_DECOMPRESSION_NRV_NRV2E_DATA_H

#include <cstdint>
#include <vector>

#include "unpacker/decompression/nrv/bit_parsers.h"
#include "unpacker/decompression/nrv/nrv_data.h"

namespace unpacker {

class Nrv2eData : public NrvData
{
public:
	Nrv2eData() = delete;
	Nrv2eData(const DynamicBuffer& buffer, BitParser* bitParser);
	Nrv2eData(const Nrv2eData&) = delete;

	virtual ~Nrv2eData() override;

	virtual bool decompress(DynamicBuffer& outputBuffer) override;

private:
	Nrv2eData& operator =(const Nrv2eData&);
};

} // namespace unpacker

#endif
