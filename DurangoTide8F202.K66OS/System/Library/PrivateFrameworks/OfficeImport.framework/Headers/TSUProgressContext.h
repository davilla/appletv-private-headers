/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDate, TSUProgressStage;

__attribute__((visibility("hidden")))
@interface TSUProgressContext : NSObject {
@private
	TSUProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	double m_lastProgressReport;	// 12 = 0xc
}
@property(readonly, retain) TSUProgressStage *currentStage;	// G=0x31b73fd5; converted property
+ (id)_singletonAlloc;	// 0x31b740b9
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x31b73fa1
+ (void)advanceProgress:(double)progress;	// 0x31b73fb9
+ (id)allocWithZone:(NSZone *)zone;	// 0x31b74461
+ (void)createStageWithSteps:(double)steps;	// 0x31b73fad
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x31b73fa9
+ (double)currentPosition;	// 0x31b73fc5
+ (void)endStage;	// 0x31b73fb5
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)nextSubStage;	// 0x31b73fb1
+ (double)overallProgress;	// 0x31b73fcd
+ (void)removeProgressObserver:(id)observer;	// 0x31b73fa5
+ (void)reset;	// 0x31b73f9d
+ (void)setMessage:(id)message;	// 0x31b73fc1
+ (void)setPercentageProgressFromCPProgressContext:(double)cpprogressContext;	// 0x31b73fbd
+ (void)setProgress:(double)progress;	// 0x31b745cd
+ (id)sharedContext;	// 0x31b74685
- (id)init;	// 0x31b74421
- (void)_reset;	// 0x31b744dd
- (id)autorelease;	// 0x31b73f95
- (id)copyWithZone:(NSZone *)zone;	// 0x31b73f99
// converted property getter: - (id)currentStage;	// 0x31b73fd5
- (void)dealloc;	// 0x31b743ad
- (void)release;	// 0x31b73f91
- (void)reportProgress:(double)progress;	// 0x31b73fe5
- (id)retain;	// 0x31b73f85
- (unsigned)retainCount;	// 0x31b73f89
@end
