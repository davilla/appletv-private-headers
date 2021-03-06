/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSArray, NSMutableArray;

@interface MRTouch : NSObject {
	NSMutableArray *_gestureRecognizers;	// 4 = 0x4
	CGPoint _location;	// 8 = 0x8
	double _timestamp;	// 16 = 0x10
	unsigned _tapCount;	// 24 = 0x18
	int _phase;	// 28 = 0x1c
}
@property(readonly, assign) NSArray *gestureRecognizers;	// G=0x363b643d; 
@property(assign, nonatomic) CGPoint location;	// G=0x363b65fd; S=0x363b6615; @synthesize=_location
@property(assign, nonatomic) int phase;	// G=0x363b6675; S=0x363b6685; @synthesize=_phase
@property(assign, nonatomic) unsigned tapCount;	// G=0x363b6655; S=0x363b6665; @synthesize=_tapCount
@property(assign, nonatomic) double timestamp;	// G=0x363b6629; S=0x363b6641; @synthesize=_timestamp
+ (id)touchWithLocation:(CGPoint)location timestamp:(double)timestamp tapCount:(unsigned)count;	// 0x363b6359
+ (id)touchWithUITouch:(id)uitouch inView:(id)view;	// 0x363b63e9
- (void)addGestureRecognizer:(id)recognizer;	// 0x363b6469
- (void)dealloc;	// 0x363b63ed
- (id)description;	// 0x363b64f5
// declared property getter: - (id)gestureRecognizers;	// 0x363b643d
// declared property getter: - (CGPoint)location;	// 0x363b65fd
// declared property getter: - (int)phase;	// 0x363b6675
- (void)removeGestureRecognizer:(id)recognizer;	// 0x363b64d5
// declared property setter: - (void)setLocation:(CGPoint)location;	// 0x363b6615
// declared property setter: - (void)setPhase:(int)phase;	// 0x363b6685
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x363b6665
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x363b6641
// declared property getter: - (unsigned)tapCount;	// 0x363b6655
// declared property getter: - (double)timestamp;	// 0x363b6629
@end

