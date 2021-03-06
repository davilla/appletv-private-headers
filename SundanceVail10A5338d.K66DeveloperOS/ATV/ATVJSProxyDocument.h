/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVCatalogApplianceController, BRController, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSProxyDocument : XXUnknownSuperclass {
	BRController *_controller;	// 4 = 0x4
	ATVJSContext *_atvContext;	// 8 = 0x8
	ATVCatalogApplianceController *_catalogApplianceController;	// 12 = 0xc
	BOOL _shouldCallOnCancel;	// 16 = 0x10
	BOOL _wasLoadCancelled;	// 17 = 0x11
}
@property(retain, nonatomic) ATVCatalogApplianceController *catalogApplianceController;	// G=0x15b1d1; S=0x15b18d; 
@property(assign, nonatomic) BOOL shouldCallOnCancel;	// G=0x15b2d1; S=0x15b2e1; @synthesize=_shouldCallOnCancel
@property(assign, nonatomic) BOOL wasLoadCancelled;	// G=0x15b2f1; S=0x15b301; @synthesize=_wasLoadCancelled
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x15accd
- (id)init;	// 0x15b1e1
// declared property getter: - (id)catalogApplianceController;	// 0x15b1d1
- (void)dealloc;	// 0x15b231
// declared property setter: - (void)setCatalogApplianceController:(id)controller;	// 0x15b18d
// declared property setter: - (void)setShouldCallOnCancel:(BOOL)callOnCancel;	// 0x15b2e1
// declared property setter: - (void)setWasLoadCancelled:(BOOL)cancelled;	// 0x15b301
// declared property getter: - (BOOL)shouldCallOnCancel;	// 0x15b2d1
// declared property getter: - (BOOL)wasLoadCancelled;	// 0x15b2f1
@end

