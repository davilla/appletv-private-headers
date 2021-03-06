/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {
	NSString *_serviceString;	// 4 = 0x4
	NSNumber *_priority;	// 8 = 0x8
	NSNumber *_weight;	// 12 = 0xc
	NSNumber *_port;	// 16 = 0x10
	NSString *_target;	// 20 = 0x14
}
@property(retain) NSNumber *port;	// G=0x30062111; S=0x30062125; @synthesize=_port
@property(retain) NSNumber *priority;	// G=0x300620a1; S=0x300620b5; @synthesize=_priority
@property(retain) NSString *serviceString;	// G=0x30062069; S=0x3006207d; @synthesize=_serviceString
@property(retain) NSString *target;	// G=0x30062149; S=0x3006215d; @synthesize=_target
@property(retain) NSNumber *weight;	// G=0x300620d9; S=0x300620ed; @synthesize=_weight
- (void)dealloc;	// 0x30061e81
- (id)description;	// 0x30061f1d
// declared property getter: - (id)port;	// 0x30062111
// declared property getter: - (id)priority;	// 0x300620a1
// declared property getter: - (id)serviceString;	// 0x30062069
// declared property setter: - (void)setPort:(id)port;	// 0x30062125
// declared property setter: - (void)setPriority:(id)priority;	// 0x300620b5
// declared property setter: - (void)setServiceString:(id)string;	// 0x3006207d
// declared property setter: - (void)setTarget:(id)target;	// 0x3006215d
// declared property setter: - (void)setWeight:(id)weight;	// 0x300620ed
// declared property getter: - (id)target;	// 0x30062149
// declared property getter: - (id)weight;	// 0x300620d9
@end

