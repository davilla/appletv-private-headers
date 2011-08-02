/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class ATVJSStorage, NSMutableDictionary, ATVJSRoot, ATVMerchant;

@interface ATVJSContext : NSObject {
@private
	ATVMerchant *_merchant;	// 4 = 0x4
	OpaqueJSContext *_context;	// 8 = 0x8
	dispatch_queue_s *_queue;	// 12 = 0xc
	ATVJSStorage *_atvLocalStorage;	// 16 = 0x10
	ATVJSStorage *_atvSessionStorage;	// 20 = 0x14
	ATVJSRoot *_atvRoot;	// 24 = 0x18
	NSMutableDictionary *_runtimeInfo;	// 28 = 0x1c
}
@property(retain, nonatomic) ATVJSStorage *atvLocalStorage;	// G=0x30704fa9; S=0x307067f5; @synthesize=_atvLocalStorage
@property(retain, nonatomic) ATVJSRoot *atvRoot;	// G=0x30704f89; S=0x30706845; @synthesize=_atvRoot
@property(retain, nonatomic) ATVJSStorage *atvSessionStorage;	// G=0x30704f99; S=0x3070681d; @synthesize=_atvSessionStorage
@property(assign, nonatomic) OpaqueJSContext *context;	// G=0x30704fd9; S=0x30704fe9; @synthesize=_context
@property(readonly, retain, nonatomic) ATVMerchant *merchant;	// G=0x30704ff9; @synthesize=_merchant
@property(assign, nonatomic) dispatch_queue_s *queue;	// G=0x30704fb9; S=0x30704fc9; @synthesize=_queue
@property(retain, nonatomic) NSMutableDictionary *runtimeInfo;	// G=0x30704f79; S=0x3070686d; @synthesize=_runtimeInfo
+ (id)contextFromJSContext:(OpaqueJSContext *)jscontext;	// 0x30706895
+ (id)contextWithMerchant:(id)merchant;	// 0x30705459
- (id)initWithMerchant:(id)merchant;	// 0x307054b1
- (void)_setupGlobalObjects:(OpaqueJSContext *)objects;	// 0x307068a5
- (id)_viewRuntimeInfo;	// 0x307136d5
- (void)addPostEvalCommand:(id)command;	// 0x307139c9
- (void)appEntry;	// 0x307050bd
- (void)appExit;	// 0x307050a1
// declared property getter: - (id)atvLocalStorage;	// 0x30704fa9
// declared property getter: - (id)atvRoot;	// 0x30704f89
// declared property getter: - (id)atvSessionStorage;	// 0x30704f99
- (void)authenticateUsername:(id)username password:(id)password object:(id)object completionHandler:(id)handler;	// 0x307050f5
- (void)callFunction:(id)function;	// 0x307053b1
- (void)callFunction:(id)function withArguments:(id)arguments;	// 0x30705389
- (void)callFunction:(id)function withArguments:(id)arguments completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x30705c05
- (BOOL)callSynchronousFunction:(id)function withArguments:(id)arguments returnValue:(id *)value;	// 0x30706391
- (OpaqueJSClass *)classForName:(id)name;	// 0x307137f5
// declared property getter: - (OpaqueJSContext *)context;	// 0x30704fd9
- (void)dealloc;	// 0x307053f1
- (void)destroyJSContext;	// 0x30705b39
- (void)evaluateBlockInContextsQueue:(id)contextsQueue;	// 0x307053d1
- (void)evaluateBlockInContextsQueue:(id)contextsQueue completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x30705eb9
- (void)evaluateScript:(id)script completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x30706085
- (void)evaluateScriptAtURL:(id)url completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x30705d59
- (BOOL)generateRequest:(id)request;	// 0x30706209
- (void)initializeViewAdditions;	// 0x3071383d
- (void)logout;	// 0x307050d9
// declared property getter: - (id)merchant;	// 0x30704ff9
- (void)pageLoad:(id)load;	// 0x30705061
- (void)pageUnload:(id)unload;	// 0x30705021
- (id)pruneUndefinedFunctions:(id)functions;	// 0x307062dd
// declared property getter: - (dispatch_queue_s *)queue;	// 0x30704fb9
// declared property getter: - (id)runtimeInfo;	// 0x30704f79
- (id)runtimeInfoForSubsystem:(id)subsystem;	// 0x307052f5
// declared property setter: - (void)setAtvLocalStorage:(id)storage;	// 0x307067f5
// declared property setter: - (void)setAtvRoot:(id)root;	// 0x30706845
// declared property setter: - (void)setAtvSessionStorage:(id)storage;	// 0x3070681d
- (void)setClass:(OpaqueJSClass *)aClass forName:(id)name;	// 0x307138a5
// declared property setter: - (void)setContext:(OpaqueJSContext *)context;	// 0x30704fe9
// declared property setter: - (void)setQueue:(dispatch_queue_s *)queue;	// 0x30704fc9
// declared property setter: - (void)setRuntimeInfo:(id)info;	// 0x3070686d
- (void)setRuntimeInfo:(id)info forSubsystem:(id)subsystem;	// 0x30705315
@end

