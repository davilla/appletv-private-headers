/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import <NSObject.h> // Unknown library

@class IMPeopleListItem, NSRecursiveLock, NSString, NSDictionary, NSMutableArray, NSArray;

@interface IMPeopleListGroup : NSObject {
	NSMutableArray *_members;	// 4 = 0x4
	NSDictionary *_properties;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_localizableName;	// 16 = 0x10
	IMPeopleListItem *_item;	// 20 = 0x14
	NSRecursiveLock *_lock;	// 24 = 0x18
	BOOL _expanded;	// 28 = 0x1c
	int _maxMembers;	// 32 = 0x20
	BOOL _supportsReordering;	// 36 = 0x24
	BOOL _supportsMemberReordering;	// 37 = 0x25
	BOOL _supportsRename;	// 38 = 0x26
	BOOL _supportsAdding;	// 39 = 0x27
	BOOL _supportsRemoving;	// 40 = 0x28
	BOOL _supportsOfflineMembers;	// 41 = 0x29
}
@property(readonly, assign) int actualNumberOfOnlineItems;	// G=0x300c95b1; 
@property(readonly, retain) NSString *displayName;	// G=0x300c92e9; 
@property(assign, setter=setExpanded:) BOOL isExpanded;	// G=0x300c90d9; S=0x300c90e9; @synthesize=_expanded
@property(retain) NSString *localizableName;	// G=0x300c9971; S=0x300c99d1; @synthesize=_localizableName
@property(assign) int maxMembers;	// G=0x300c90b9; S=0x300c90c9; @synthesize=_maxMembers
@property(retain) NSArray *members;	// G=0x300c99b9; S=0x300c9a55; @synthesize=_members
@property(retain) NSString *name;	// G=0x300c99a1; S=0x300c9a29; @synthesize=_name
@property(readonly, assign) int numberOfItems;	// G=0x300c91fd; 
@property(readonly, assign) int numberOfOnlineItems;	// G=0x300c94dd; 
@property(retain) IMPeopleListItem *peopleListItem;	// G=0x300c9989; S=0x300c99fd; @synthesize=_item
@property(retain) NSDictionary *properties;	// G=0x300c9959; S=0x300c9685; @synthesize=_properties
@property(assign) BOOL supportsAdding;	// G=0x300c9039; S=0x300c9049; @synthesize=_supportsAdding
@property(assign) BOOL supportsMemberReordering;	// G=0x300c9079; S=0x300c9089; @synthesize=_supportsMemberReordering
@property(assign) BOOL supportsOfflineMembers;	// G=0x300c8ff9; S=0x300c9009; @synthesize=_supportsOfflineMembers
@property(assign) BOOL supportsRemoving;	// G=0x300c9019; S=0x300c9029; @synthesize=_supportsRemoving
@property(assign) BOOL supportsRename;	// G=0x300c9059; S=0x300c9069; @synthesize=_supportsRename
@property(assign) BOOL supportsReordering;	// G=0x300c9099; S=0x300c90a9; @synthesize=_supportsReordering
@property(readonly, retain) NSArray *visibleMembers;	// G=0x300c9319; 
- (id)init;	// 0x300c93f1
// declared property getter: - (int)actualNumberOfOnlineItems;	// 0x300c95b1
- (void)addPeopleListItem:(id)item;	// 0x300c9275
- (void)dealloc;	// 0x300c932d
- (id)description;	// 0x300c9189
// declared property getter: - (id)displayName;	// 0x300c92e9
- (XXStruct_La4IvC)filterForIMHandle:(id)imhandle;	// 0x300c8fed
// declared property getter: - (BOOL)isExpanded;	// 0x300c90d9
// declared property getter: - (id)localizableName;	// 0x300c9971
// declared property getter: - (int)maxMembers;	// 0x300c90b9
// declared property getter: - (id)members;	// 0x300c99b9
// declared property getter: - (id)name;	// 0x300c99a1
// declared property getter: - (int)numberOfItems;	// 0x300c91fd
// declared property getter: - (int)numberOfOnlineItems;	// 0x300c94dd
// declared property getter: - (id)peopleListItem;	// 0x300c9989
// declared property getter: - (id)properties;	// 0x300c9959
- (void)removeAllItems;	// 0x300c9139
- (void)removePeopleListItem:(id)item;	// 0x300c9221
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x300c90e9
// declared property setter: - (void)setLocalizableName:(id)name;	// 0x300c99d1
// declared property setter: - (void)setMaxMembers:(int)members;	// 0x300c90c9
// declared property setter: - (void)setMembers:(id)members;	// 0x300c9a55
// declared property setter: - (void)setName:(id)name;	// 0x300c9a29
// declared property setter: - (void)setPeopleListItem:(id)item;	// 0x300c99fd
// declared property setter: - (void)setProperties:(id)properties;	// 0x300c9685
// declared property setter: - (void)setSupportsAdding:(BOOL)adding;	// 0x300c9049
// declared property setter: - (void)setSupportsMemberReordering:(BOOL)reordering;	// 0x300c9089
// declared property setter: - (void)setSupportsOfflineMembers:(BOOL)members;	// 0x300c9009
// declared property setter: - (void)setSupportsRemoving:(BOOL)removing;	// 0x300c9029
// declared property setter: - (void)setSupportsRename:(BOOL)rename;	// 0x300c9069
// declared property setter: - (void)setSupportsReordering:(BOOL)reordering;	// 0x300c90a9
- (BOOL)shouldConsumeIMHandle:(id)handle;	// 0x300c8fe9
- (BOOL)shouldContainIMHandle:(id)handle;	// 0x300c90f9
// declared property getter: - (BOOL)supportsAdding;	// 0x300c9039
// declared property getter: - (BOOL)supportsMemberReordering;	// 0x300c9079
// declared property getter: - (BOOL)supportsOfflineMembers;	// 0x300c8ff9
// declared property getter: - (BOOL)supportsRemoving;	// 0x300c9019
// declared property getter: - (BOOL)supportsRename;	// 0x300c9059
// declared property getter: - (BOOL)supportsReordering;	// 0x300c9099
// declared property getter: - (id)visibleMembers;	// 0x300c9319
@end

