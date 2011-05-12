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
@property(assign) BOOL cancel;	// G=0x329dbead; S=0x329dbebd; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x3291679d
- (id)initWithName:(id)name;	// 0x329167a1
// declared property getter: - (BOOL)cancel;	// 0x329dbead
- (void)dealloc;	// 0x32916805
- (void)reset;	// 0x329dbecd
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x329dbebd
@end

