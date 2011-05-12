/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSThread, BRAsyncTaskContext;

@interface BRAsyncTask : NSObject {
@private
	NSThread *_callingThread;	// 4 = 0x4
	id _target;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _object;	// 16 = 0x10
	id _result;	// 20 = 0x14
	BRAsyncTaskContext *_context;	// 24 = 0x18
	int _state;	// 28 = 0x1c
	NSString *_identifier;	// 32 = 0x20
}
@property(readonly, retain) NSThread *callingThread;	// G=0x32935f49; converted property
@property(readonly, retain) BRAsyncTaskContext *context;	// G=0x329ca19d; converted property
@property(retain) NSString *identifier;	// G=0x329ca1ad; S=0x329ca1cd; converted property
@property(readonly, retain) id object;	// G=0x329ca18d; converted property
@property(readonly, retain) id result;	// G=0x32938339; converted property
@property(readonly, assign) SEL selector;	// G=0x329ca16d; converted property
@property(assign) int state;	// G=0x329366a9; S=0x329ca1bd; converted property
@property(readonly, retain) id target;	// G=0x329ca17d; converted property
+ (void)_runTaskBlock:(id)block;	// 0x329ca161
+ (void)initialize;	// 0x32935c1d
+ (id)taskWithBlock:(id)block;	// 0x329ca235
+ (id)taskWithContext:(id)context withBlock:(id)block;	// 0x329ca2e5
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object;	// 0x32935c71
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x32935ca5
+ (id)voidReturnValue;	// 0x329ca155
- (id)_initWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x32935cf9
// converted property getter: - (id)callingThread;	// 0x32935f49
- (void)cancel;	// 0x329ca205
// converted property getter: - (id)context;	// 0x329ca19d
- (void)dealloc;	// 0x32938419
- (id)description;	// 0x329ca275
// converted property getter: - (id)identifier;	// 0x329ca1ad
- (id)invoke;	// 0x329366b9
// converted property getter: - (id)object;	// 0x329ca18d
// converted property getter: - (id)result;	// 0x32938339
- (void)run;	// 0x32935db1
// converted property getter: - (SEL)selector;	// 0x329ca16d
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x329ca1cd
// converted property setter: - (void)setState:(int)state;	// 0x329ca1bd
// converted property getter: - (int)state;	// 0x329366a9
// converted property getter: - (id)target;	// 0x329ca17d
@end

