/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRTimer : NSObject {
@private
	BOOL _cancel;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	double _interval;	// 12 = 0xc
}
@property(assign) BOOL cancel;	// G=0x32fdd091; S=0x32fdd0a1; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x32f18861
- (id)initWithName:(id)name;	// 0x32f18865
// declared property getter: - (BOOL)cancel;	// 0x32fdd091
- (void)dealloc;	// 0x32f188c9
- (void)reset;	// 0x32fdd0b1
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x32fdd0a1
@end

