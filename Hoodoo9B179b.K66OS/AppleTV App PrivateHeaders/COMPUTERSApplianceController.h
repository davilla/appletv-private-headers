/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "COMPUTERSApplianceController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface COMPUTERSApplianceController : XXUnknownSuperclass {
	id<BRAppliance> _appliance;	// 68 = 0x44
	BOOL _computersListed;	// 72 = 0x48
	BOOL _viewSelectedOnce;	// 73 = 0x49
}
@property(assign, nonatomic) BOOL _computersListed;	// G=0xdd3c1; S=0xdd3d1; @synthesize
@property(assign, nonatomic) BOOL _viewSelectedOnce;	// G=0xdd3e1; S=0xdd3f1; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xdd38d; S=0xdd39d; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xdc9e5
- (void).cxx_destruct;	// 0xdd401
// declared property getter: - (BOOL)_computersListed;	// 0xdd3c1
// declared property getter: - (BOOL)_viewSelectedOnce;	// 0xdd3e1
// declared property getter: - (id)appliance;	// 0xdd38d
- (void)dealloc;	// 0xdcad5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xdd25d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xdd189
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xdcfa1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xdce05
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xdcf45
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xdd39d
// declared property setter: - (void)set_computersListed:(BOOL)listed;	// 0xdd3d1
// declared property setter: - (void)set_viewSelectedOnce:(BOOL)once;	// 0xdd3f1
- (void)wasExhumed;	// 0xdcc81
- (void)wasPushed;	// 0xdcb41
@end

@interface COMPUTERSApplianceController (Private)
- (void)_homeShareServersChanged:(id)changed;	// 0xddcf9
- (void)_selectView;	// 0xdd415
@end
