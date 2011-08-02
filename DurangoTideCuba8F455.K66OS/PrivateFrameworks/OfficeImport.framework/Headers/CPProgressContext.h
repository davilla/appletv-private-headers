/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableArray, CPProgressStage;

__attribute__((visibility("hidden")))
@interface CPProgressContext : NSObject {
@private
	CPProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	NSMutableArray *m_stackOfBranches;	// 12 = 0xc
}
@property(readonly, retain) CPProgressStage *currentStage;	// G=0x32d87f85; converted property
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x32d87f69
+ (void)advanceProgress:(double)progress;	// 0x32af3e81
+ (id)contextForCurrentThread;	// 0x32d88369
+ (id)createBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x32d87f71
+ (void)createContextForCurrentThread;	// 0x32d87f61
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x32aee8e9
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x32ae7efd
+ (double)currentPosition;	// 0x32d87f7d
+ (void)endBranch:(id)branch;	// 0x32d87f75
+ (void)endStage;	// 0x32af4189
+ (void)popBranch;	// 0x32b08761
+ (void)pushBranch:(id)branch;	// 0x32ae7ed9
+ (void)removeContextForCurrentThread;	// 0x32d87f65
+ (void)removeProgressObserver:(id)observer;	// 0x32d87f6d
+ (void)setMessage:(id)message;	// 0x32d87f79
+ (void)setProgress:(double)progress;	// 0x32bce7a9
+ (id)stageForCurrentThread;	// 0x32d88345
- (id)init;	// 0x32d88439
// converted property getter: - (id)currentStage;	// 0x32d87f85
- (void)dealloc;	// 0x32d883ad
- (void)reportProgress:(double)progress;	// 0x32d87f95
- (id)rootStage;	// 0x32d8830d
@end

