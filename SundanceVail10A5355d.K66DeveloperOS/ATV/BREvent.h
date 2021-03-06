/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BREvent : XXUnknownSuperclass {
	NSDictionary *_eventDictionary;	// 4 = 0x4
	int _action;	// 8 = 0x8
	double _timeStamp;	// 12 = 0xc
	int _value;	// 20 = 0x14
	unsigned _originator;	// 24 = 0x18
	BOOL _allowRetrigger;	// 28 = 0x1c
	BOOL _retrigger;	// 29 = 0x1d
}
@property(readonly, assign) BOOL allowRetrigger;	// G=0x28d655; converted property
@property(readonly, retain) NSDictionary *eventDictionary;	// G=0x28d645; converted property
@property(readonly, assign) unsigned originator;	// G=0x28d635; converted property
@property(readonly, assign) double timeStamp;	// G=0x28d61d; converted property
@property(readonly, assign) int value;	// G=0x28d5e9; converted property
+ (id)eventWithAction:(int)action value:(int)value;	// 0x28ced1
+ (id)eventWithAction:(int)action value:(int)value atTime:(double)time;	// 0x28cf11
+ (id)eventWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator;	// 0x28cf5d
+ (id)eventWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator eventDictionary:(id)dictionary allowRetrigger:(BOOL)retrigger;	// 0x28cfad
+ (id)eventWithEvent:(id)event originator:(unsigned)originator;	// 0x28d0a5
+ (id)eventWithEvent:(id)event originator:(unsigned)originator eventDictionary:(id)dictionary allowRetrigger:(BOOL)retrigger;	// 0x28d009
- (id)initWithAction:(int)action value:(int)value;	// 0x28d169
- (id)initWithAction:(int)action value:(int)value atTime:(double)time;	// 0x28d199
- (id)initWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator;	// 0x28d1c5
- (id)initWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator eventDictionary:(id)dictionary allowRetrigger:(BOOL)retrigger;	// 0x28d201
// converted property getter: - (BOOL)allowRetrigger;	// 0x28d655
- (void)dealloc;	// 0x28d2ad
- (id)description;	// 0x28d2f9
// converted property getter: - (id)eventDictionary;	// 0x28d645
- (BOOL)isEqual:(id)equal;	// 0x28d555
- (void)makeRetriggerEvent;	// 0x28d609
// converted property getter: - (unsigned)originator;	// 0x28d635
- (int)remoteAction;	// 0x28d5d9
- (BOOL)retriggerEvent;	// 0x28d5f9
// converted property getter: - (double)timeStamp;	// 0x28d61d
// converted property getter: - (int)value;	// 0x28d5e9
@end

