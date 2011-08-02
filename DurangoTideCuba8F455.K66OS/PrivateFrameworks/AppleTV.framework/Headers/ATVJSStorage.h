/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class ATVJSContext;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVJSStorage : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id<ATVReadWriteFeedResource> _resource;	// 12 = 0xc
}
@property(retain) ATVJSContext *context;	// G=0x3070822d; S=0x307081d9; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x30707c4d; S=0x30707c5d; @synthesize=_jsObjectRef
@property(retain, nonatomic) id<ATVReadWriteFeedResource> resource;	// G=0x30707c3d; S=0x30708205; @synthesize=_resource
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2 resource:(id)resource;	// 0x30707cc9
// declared property getter: - (id)context;	// 0x3070822d
- (void)dealloc;	// 0x30707c6d
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x30707c4d
// declared property getter: - (id)resource;	// 0x30707c3d
// declared property setter: - (void)setContext:(id)context;	// 0x307081d9
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x30707c5d
// declared property setter: - (void)setResource:(id)resource;	// 0x30708205
@end

