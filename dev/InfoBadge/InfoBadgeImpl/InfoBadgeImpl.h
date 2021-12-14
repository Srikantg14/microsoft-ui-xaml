﻿#pragma once
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "InfoBadgeTemplatePartHelpers.h"
using namespace ::winrt::Windows::Foundation;

namespace InfoBadgeImpl
{
#pragma region ControlOverrides
    winrt::Size MeasureOverrideImpl(Size const& defaultDesiredSize);
#pragma endregion 

#pragma region OnValuePropertyChanged
    void ValidateValuePropertyImpl(int value);
#pragma endregion 

#pragma region GoToAppropriateDisplayKindState
    InfoBadgeDisplayKindStates CalculateAppropriateDisplayKindStateImpl(int value, bool iconExists, bool iconIsFontIcon);
    namespace
    {
        InfoBadgeDisplayKindStates CalculateIconOrDotDisplayKindState(bool iconExists, bool iconIsFontIcon);
        InfoBadgeDisplayKindStates CalculateIconDisplayKindState(bool iconIsFontIcon);
    }
#pragma endregion

#pragma region OnSizeChanged
    std::tuple<double, double, double, double> GetFullyRoundedCornerRadiusValueImpl(double height);
#pragma endregion
};
