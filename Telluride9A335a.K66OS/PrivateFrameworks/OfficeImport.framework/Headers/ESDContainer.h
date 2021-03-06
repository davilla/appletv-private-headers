/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDContainer : ESDObject {
@private
	NSMutableArray *mChildren;	// 16 = 0x10
}
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x351d350d
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x3525dea5
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x3525df89
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x351a4465
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x353d2f61
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x35342699
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x353425a9
- (void)addChild:(id)child;	// 0x351a4551
- (id)addChildOfType:(unsigned short)type;	// 0x353d3059
- (id)addContainerChildOfType:(unsigned short)type;	// 0x353d2f89
- (id)addEshChild:(EshObject *)child;	// 0x353d3095
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x35342291
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x3534219d
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x353422b9
- (id)childAt:(unsigned)at;	// 0x3512ed05
- (unsigned)childCount;	// 0x3512f869
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x351aa311
- (void)dealloc;	// 0x351a806d
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x3520be01
- (EshContainer *)eshContainer;	// 0x351a45b9
- (EshGroup *)eshGroup;	// 0x351f38e9
- (id)firstChildOfType:(unsigned short)type;	// 0x3512f085
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x353d2d15
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x353d2cd9
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x351e5e69
- (void)insertChild:(id)child at:(unsigned)at;	// 0x353d2ef5
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x353d2e11
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x351d380d
- (void)removeChild:(id)child;	// 0x353d2d99
- (id)shapeContainer;	// 0x35227785
@end

