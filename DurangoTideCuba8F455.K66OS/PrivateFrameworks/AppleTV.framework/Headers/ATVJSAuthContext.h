/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVJSObject.h"


__attribute__((visibility("hidden")))
@interface ATVJSAuthContext : NSObject <ATVJSObject> {
@private
	OpaqueJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id _notificationObject;	// 12 = 0xc
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x3070856d; S=0x3070857d; @synthesize=_jsObjectRef
@property(retain, nonatomic) id notificationObject;	// G=0x3070855d; S=0x307089e5; @synthesize=_notificationObject
- (id)initWithContext:(OpaqueJSContext *)context object:(id)object;	// 0x30708635
- (void)dealloc;	// 0x3070858d
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x3070856d
// declared property getter: - (id)notificationObject;	// 0x3070855d
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x3070857d
// declared property setter: - (void)setNotificationObject:(id)object;	// 0x307089e5
@end

