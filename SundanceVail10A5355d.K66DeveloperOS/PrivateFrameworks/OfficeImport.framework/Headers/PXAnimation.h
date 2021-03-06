/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PXAnimation : NSObject {
}
+ (void)readAnimAudioElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d433b9
+ (void)readAnimCmdElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d3bf5d
+ (void)readAnimEffectElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d0ca25
+ (void)readAnimElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d13bf1
+ (void)readAnimMotionElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31cc49f1
+ (void)readAnimParallelElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31cc4585
+ (void)readAnimRotationElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d44ac1
+ (void)readAnimScaleElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d38819
+ (void)readAnimSequentialElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31cc44dd
+ (void)readAnimSetElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d0c83d
+ (id)readAnimVariant:(xmlNode *)variant;	// 0x31d0c951
+ (void)readAnimVideoElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x31d4e5bd
+ (void)readAnimationFromTimingXmlNode:(xmlNode *)timingXmlNode tgtAnimation:(id)animation drawingState:(id)state;	// 0x31cbc781
+ (int)readChartBuildType:(id)type;	// 0x31e0a185
+ (void)readChartType:(id)type oleChartTarget:(id)target;	// 0x31e0a0e5
+ (void)readChildTimeNodeList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x31cc4395
+ (void)readCommonBehaviorData:(xmlNode *)data tgtCommonBehaviorData:(id)data2 drawingState:(id)state;	// 0x31cc4c81
+ (void)readCommonMediaNodeData:(xmlNode *)data commonMediaData:(id)data2 drawingState:(id)state;	// 0x31d434f1
+ (void)readCommonTimeNodeData:(xmlNode *)data commonTimeNodeData:(id)data2 drawingState:(id)state;	// 0x31cc0a4d
+ (void)readCondition:(xmlNode *)condition timeCondition:(id)condition2 drawingState:(id)state;	// 0x31cc4781
+ (id)readGraphicBuild:(xmlNode *)build;	// 0x31d294d5
+ (void)readIterate:(xmlNode *)iterate commonTimeNodeData:(id)data drawingState:(id)state;	// 0x31d2966d
+ (id)readOleChartBuild:(xmlNode *)build;	// 0x31e0a209
+ (id)readParagraphBuild:(xmlNode *)build;	// 0x31d0cc79
+ (void)readPointFromNode:(xmlNode *)node tgtPoint:(CGPoint *)point;	// 0x31cc5675
+ (void)readPresetClass:(id)aClass commonTimeNodeData:(id)data;	// 0x31cc48f9
+ (void)readRestartType:(id)type commonTimeNodeData:(id)data;	// 0x31cc0e85
+ (id)readShapeTarget:(xmlNode *)target drawingState:(id)state;	// 0x31cc4f39
+ (void)readStConditionList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x31cc462d
+ (id)readTgtElement:(xmlNode *)element drawingState:(id)state;	// 0x31cc4d81
+ (void)readTimeNodeType:(id)type commonTimeNodeData:(id)data;	// 0x31cc0dd5
+ (void)readTriggerEvent:(id)event timeCondition:(id)condition;	// 0x31d16afd
@end

