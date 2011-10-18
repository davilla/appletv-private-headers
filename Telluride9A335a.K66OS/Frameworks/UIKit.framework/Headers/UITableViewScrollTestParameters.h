/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewScrollTestParameters : NSObject {
@private
	int _iterations;	// 4 = 0x4
	int _yDelta;	// 8 = 0x8
	int _scrollLength;	// 12 = 0xc
	NSString *_currentTest;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *currentTest;	// G=0x33b27989; S=0x33b27e59; @synthesize=_currentTest
@property(assign, nonatomic) int iterations;	// G=0x33b27de5; S=0x33b27e05; @synthesize=_iterations
@property(assign, nonatomic) int scrollLength;	// G=0x33b27dd5; S=0x33c6ebb5; @synthesize=_scrollLength
@property(assign, nonatomic) int yDelta;	// G=0x33b27dc5; S=0x33b27df5; @synthesize=_yDelta
- (id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x33b278e5
// declared property getter: - (id)currentTest;	// 0x33b27989
- (void)dealloc;	// 0x33b27e15
// declared property getter: - (int)iterations;	// 0x33b27de5
// declared property getter: - (int)scrollLength;	// 0x33b27dd5
// declared property setter: - (void)setCurrentTest:(id)test;	// 0x33b27e59
// declared property setter: - (void)setIterations:(int)iterations;	// 0x33b27e05
// declared property setter: - (void)setScrollLength:(int)length;	// 0x33c6ebb5
// declared property setter: - (void)setYDelta:(int)delta;	// 0x33b27df5
// declared property getter: - (int)yDelta;	// 0x33b27dc5
@end

