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
@property(retain, nonatomic) NSString *currentTest;	// G=0x321edcfd; S=0x321edded; @synthesize=_currentTest
@property(assign, nonatomic) int iterations;	// G=0x321edd0d; S=0x321edd1d; @synthesize=_iterations
@property(assign, nonatomic) int scrollLength;	// G=0x321edcbd; S=0x321edccd; @synthesize=_scrollLength
@property(assign, nonatomic) int yDelta;	// G=0x321edcdd; S=0x321edced; @synthesize=_yDelta
- (id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x321edd69
// declared property getter: - (id)currentTest;	// 0x321edcfd
- (void)dealloc;	// 0x321edd2d
// declared property getter: - (int)iterations;	// 0x321edd0d
// declared property getter: - (int)scrollLength;	// 0x321edcbd
// declared property setter: - (void)setCurrentTest:(id)test;	// 0x321edded
// declared property setter: - (void)setIterations:(int)iterations;	// 0x321edd1d
// declared property setter: - (void)setScrollLength:(int)length;	// 0x321edccd
// declared property setter: - (void)setYDelta:(int)delta;	// 0x321edced
// declared property getter: - (int)yDelta;	// 0x321edcdd
@end

