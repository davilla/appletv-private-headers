/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMPresence.h"
#import "IMCore-Structs.h"

@class IMServiceImpl, NSString, IMPerson, NSSet;

@interface IMBuddyListPresence : IMPresence {
	NSSet *_filterGroups;	// 36 = 0x24
	IMPerson *_filterPerson;	// 40 = 0x28
	IMServiceImpl *_filterService;	// 44 = 0x2c
	NSString *_IDFilter;	// 48 = 0x30
	NSString *_filterSingleGroup;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) NSString *group;	// G=0x30ae106d; 
@property(readonly, assign, nonatomic) NSSet *groups;	// G=0x30ae0c55; @synthesize=_filterGroups
@property(readonly, assign, nonatomic) IMPerson *person;	// G=0x30ae0c65; @synthesize=_filterPerson
@property(readonly, assign, nonatomic) IMServiceImpl *service;	// G=0x30ae0c75; @synthesize=_filterService
@property(readonly, assign, nonatomic) unsigned sortOrder;	// G=0x30ae0c85; 
- (id)initWithIMPersonFilter:(id)impersonFilter IDFilter:(id)filter serviceFilter:(id)filter3 groupFilters:(id)filters;	// 0x30ae10f1
- (id)initWithIMPersonFilter:(id)impersonFilter IDFilter:(id)filter serviceFilter:(id)filter3 groupFilters:(id)filters quiet:(BOOL)quiet;	// 0x30ae1229
- (id)initWithIMPersonFilter:(id)impersonFilter serviceFilter:(id)filter groupFilters:(id)filters;	// 0x30ae10a1
- (id)initWithIMPersonFilter:(id)impersonFilter serviceFilter:(id)filter groupFilters:(id)filters quiet:(BOOL)quiet;	// 0x30ae10c5
- (id)_filterSingleGroup;	// 0x30ae0c45
- (BOOL)canAddIMHandle:(id)handle;	// 0x30ae0f0d
- (id)copyWithZone:(NSZone *)zone;	// 0x30ae108d
- (void)dealloc;	// 0x30ae1199
// declared property getter: - (id)group;	// 0x30ae106d
// declared property getter: - (id)groups;	// 0x30ae0c55
- (BOOL)isEqual:(id)equal;	// 0x30ae0d4d
// declared property getter: - (id)person;	// 0x30ae0c65
// declared property getter: - (id)service;	// 0x30ae0c75
// declared property getter: - (unsigned)sortOrder;	// 0x30ae0c85
@end

