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
+ (void)readAnimAudioElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x370bc3d9
+ (void)readAnimCmdElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x370b4f7d
+ (void)readAnimEffectElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x37085a45
+ (void)readAnimElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3708cc11
+ (void)readAnimMotionElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3703da39
+ (void)readAnimParallelElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3703d5cd
+ (void)readAnimRotationElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x370bdae1
+ (void)readAnimScaleElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x370b1839
+ (void)readAnimSequentialElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3703d525
+ (void)readAnimSetElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3708585d
+ (id)readAnimVariant:(xmlNode *)variant;	// 0x37085971
+ (void)readAnimVideoElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x370c75dd
+ (void)readAnimationFromTimingXmlNode:(xmlNode *)timingXmlNode tgtAnimation:(id)animation drawingState:(id)state;	// 0x370357c9
+ (int)readChartBuildType:(id)type;	// 0x37183235
+ (void)readChartType:(id)type oleChartTarget:(id)target;	// 0x37183195
+ (void)readChildTimeNodeList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x3703d3dd
+ (void)readCommonBehaviorData:(xmlNode *)data tgtCommonBehaviorData:(id)data2 drawingState:(id)state;	// 0x3703dcc9
+ (void)readCommonMediaNodeData:(xmlNode *)data commonMediaData:(id)data2 drawingState:(id)state;	// 0x370bc511
+ (void)readCommonTimeNodeData:(xmlNode *)data commonTimeNodeData:(id)data2 drawingState:(id)state;	// 0x37039a95
+ (void)readCondition:(xmlNode *)condition timeCondition:(id)condition2 drawingState:(id)state;	// 0x3703d7c9
+ (id)readGraphicBuild:(xmlNode *)build;	// 0x370a24f5
+ (void)readIterate:(xmlNode *)iterate commonTimeNodeData:(id)data drawingState:(id)state;	// 0x370a268d
+ (id)readOleChartBuild:(xmlNode *)build;	// 0x371832b9
+ (id)readParagraphBuild:(xmlNode *)build;	// 0x37085c99
+ (void)readPointFromNode:(xmlNode *)node tgtPoint:(CGPoint *)point;	// 0x3703e6bd
+ (void)readPresetClass:(id)aClass commonTimeNodeData:(id)data;	// 0x3703d941
+ (void)readRestartType:(id)type commonTimeNodeData:(id)data;	// 0x37039ecd
+ (id)readShapeTarget:(xmlNode *)target drawingState:(id)state;	// 0x3703df81
+ (void)readStConditionList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x3703d675
+ (id)readTgtElement:(xmlNode *)element drawingState:(id)state;	// 0x3703ddc9
+ (void)readTimeNodeType:(id)type commonTimeNodeData:(id)data;	// 0x37039e1d
+ (void)readTriggerEvent:(id)event timeCondition:(id)condition;	// 0x3708fb1d
@end

