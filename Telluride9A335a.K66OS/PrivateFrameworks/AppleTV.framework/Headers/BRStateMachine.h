/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, NSRunLoop, NSString, NSMutableDictionary;

@interface BRStateMachine : NSObject {
@private
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	BOOL shouldProcessEvents;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _immediate;	// 36 = 0x24
	BOOL _ignoreRecursiveEvents;	// 37 = 0x25
}
@property(readonly, assign) NSString *currentState;	// G=0x342c1e79; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x342c1eb1; S=0x342c1ec1; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x342c1ea1; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x342c1e8d; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x342c1e59; S=0x342c1e69; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x342c10a5
+ (void)initialize;	// 0x342c0f85
+ (void)registerStateMachine:(id)machine;	// 0x342c0fd9
+ (id)stateMachineWithName:(id)name;	// 0x342c119d
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x342c1281
- (id)_eventHandlerForEvent:(id)event;	// 0x342c2269
- (void)_processNextEvent;	// 0x342c1ed1
// declared property getter: - (id)currentState;	// 0x342c1e79
- (void)dealloc;	// 0x342c13b5
- (void)deregisterHandlers;	// 0x342c1a6d
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x342c1eb1
// declared property getter: - (BOOL)immediate;	// 0x342c1ea1
- (void)logUnhandledEvents;	// 0x342c1aa9
// declared property getter: - (id)name;	// 0x342c1e8d
- (void)postEvent:(id)event withContext:(id)context;	// 0x342c1525
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x342c1549
- (void)purgeEventQueue;	// 0x342c1871
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x342c19f1
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x342c1929
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x342c1ec1
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x342c1e69
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x342c1e59
@end

