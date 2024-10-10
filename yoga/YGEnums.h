/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

// @generated by enums.py
// clang-format off
#pragma once
#include <yoga/YGMacros.h>

YG_EXTERN_C_BEGIN

YG_ENUM_DECL(
    YGAlign,
    YGAlignAuto,
    YGAlignFlexStart,
    YGAlignCenter,
    YGAlignFlexEnd,
    YGAlignStretch,
    YGAlignBaseline,
    YGAlignSpaceBetween,
    YGAlignSpaceAround,
    YGAlignSpaceEvenly)

YG_ENUM_DECL(
    YGBoxSizing,
    YGBoxSizingBorderBox,
    YGBoxSizingContentBox)

YG_ENUM_DECL(
    YGDimension,
    YGDimensionWidth,
    YGDimensionHeight)

YG_ENUM_DECL(
    YGDirection,
    YGDirectionInherit,
    YGDirectionLTR,
    YGDirectionRTL)

YG_ENUM_DECL(
    YGDisplay,
    YGDisplayFlex,
    YGDisplayNone)

YG_ENUM_DECL(
    YGEdge,
    YGEdgeLeft,
    YGEdgeTop,
    YGEdgeRight,
    YGEdgeBottom,
    YGEdgeStart,
    YGEdgeEnd,
    YGEdgeHorizontal,
    YGEdgeVertical,
    YGEdgeAll)

YG_ENUM_DECL(
    YGErrata,
    YGErrataNone = 0,
    YGErrataStretchFlexBasis = 1,
    YGErrataAbsolutePositioningIncorrect = 2,
    YGErrataAbsolutePercentAgainstInnerSize = 4,
    YGErrataAll = 2147483647,
    YGErrataClassic = 2147483646)
YG_DEFINE_ENUM_FLAG_OPERATORS(YGErrata)

YG_ENUM_DECL(
    YGExperimentalFeature,
    YGExperimentalFeatureWebFlexBasis)

YG_ENUM_DECL(
    YGFlexDirection,
    YGFlexDirectionColumn,
    YGFlexDirectionColumnReverse,
    YGFlexDirectionRow,
    YGFlexDirectionRowReverse)

YG_ENUM_DECL(
    YGGutter,
    YGGutterColumn,
    YGGutterRow,
    YGGutterAll)

YG_ENUM_DECL(
    YGJustify,
    YGJustifyFlexStart,
    YGJustifyCenter,
    YGJustifyFlexEnd,
    YGJustifySpaceBetween,
    YGJustifySpaceAround,
    YGJustifySpaceEvenly)

YG_ENUM_DECL(
    YGLogLevel,
    YGLogLevelError,
    YGLogLevelWarn,
    YGLogLevelInfo,
    YGLogLevelDebug,
    YGLogLevelVerbose,
    YGLogLevelFatal)

YG_ENUM_DECL(
    YGMeasureMode,
    YGMeasureModeUndefined,
    YGMeasureModeExactly,
    YGMeasureModeAtMost)

YG_ENUM_DECL(
    YGNodeType,
    YGNodeTypeDefault,
    YGNodeTypeText)

YG_ENUM_DECL(
    YGOverflow,
    YGOverflowVisible,
    YGOverflowHidden,
    YGOverflowScroll)

YG_ENUM_DECL(
    YGPositionType,
    YGPositionTypeStatic,
    YGPositionTypeRelative,
    YGPositionTypeAbsolute)

YG_ENUM_DECL(
    YGUnit,
    YGUnitUndefined,
    YGUnitPoint,
    YGUnitPercent,
    YGUnitAuto,
    YGUnitMaxContent,
    YGUnitFitContent,
    YGUnitStretch)

YG_ENUM_DECL(
    YGWrap,
    YGWrapNoWrap,
    YGWrapWrap,
    YGWrapWrapReverse)

YG_EXTERN_C_END
