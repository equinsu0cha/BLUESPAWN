#pragma once
#include "../Mitigation.h"
#include <mitigation\MitigationRegister.h>
#include "hunt/reaction/Reaction.h"
#include "hunt/reaction/Log.h"

namespace Mitigations {
	/**
	* Mitigation M1035 Limits access to RDP over network by ensuring that RDP is enabled
	*/
	class MitigateM1035 : public Mitigation {
	public:
		MitigateM1035();

		virtual bool MitigationIsEnforced(SecurityLevel level) override;
		virtual bool EnforceMitigation(SecurityLevel level) override;
		virtual bool MitigationApplies() override;
	};
}