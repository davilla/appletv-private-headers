/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "DAVKit-Structs.h"

@class DAVSession;

@interface DAVTrustInfo : NSObject {
	SecTrust *_trust;	// 4 = 0x4
	DAVSession *_session;	// 8 = 0x8
	BOOL _allows;	// 12 = 0xc
}
@property(assign) BOOL allowsTrust;	// G=0x314cfe5d; S=0x314cfe4d; converted property
@property(readonly, retain) DAVSession *session;	// G=0x314cfe3d; converted property
@property(readonly, assign) SecTrust *trust;	// G=0x314cfe2d; converted property
- (id)initWithTrust:(SecTrust *)trust session:(id)session;	// 0x314cff15
// converted property getter: - (BOOL)allowsTrust;	// 0x314cfe5d
- (void)dealloc;	// 0x314d0ad9
- (id)host;	// 0x314cfef5
// converted property getter: - (id)session;	// 0x314cfe3d
// converted property setter: - (void)setAllowsTrust:(BOOL)trust;	// 0x314cfe4d
// converted property getter: - (SecTrust *)trust;	// 0x314cfe2d
@end

