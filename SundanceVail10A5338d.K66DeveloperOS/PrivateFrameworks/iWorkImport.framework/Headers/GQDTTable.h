/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDTTableModel, GQDSStyle;

@interface GQDTTable : GQDGraphic <GQDNameMappable> {
	GQDTTableModel *mModel;	// 40 = 0x28
	GQDSStyle *mStyle;	// 44 = 0x2c
	BOOL mIsStreamed;	// 48 = 0x30
}
@property(retain) id model;	// G=0x3508b7fd; S=0x3508b80d; converted property
@property(retain) id tableStyle;	// G=0x3508b849; S=0x3508b859; converted property
+ (const StateSpec *)stateForReading;	// 0x3508b78d
- (void)dealloc;	// 0x3508b799
- (id)defaultVectorStyleForVectorType:(int)vectorType;	// 0x3508b8a5
- (BOOL)isStreamed;	// 0x3508b895
// converted property getter: - (id)model;	// 0x3508b7fd
// converted property setter: - (void)setModel:(id)model;	// 0x3508b80d
// converted property setter: - (void)setTableStyle:(id)style;	// 0x3508b859
// converted property getter: - (id)tableStyle;	// 0x3508b849
- (int)walkTableWithGenerator:(Class)generator state:(id)state;	// 0x3508b90d
@end

