/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import "IMPeopleListGroup.h"

@class IMServiceImpl;

@interface IMServicePeopleListGroup : IMPeopleListGroup {
	IMServiceImpl *_serviceFilter;	// 44 = 0x2c
}
+ (id)bonjourGroup;	// 0x30af2e8d
- (id)initWithServiceFilter:(id)serviceFilter;	// 0x30af2e09
- (void)dealloc;	// 0x30af2dc1
- (XXStruct_La4IvC)filterForIMHandle:(id)imhandle;	// 0x30af2ee5
- (BOOL)shouldConsumeIMHandle:(id)handle;	// 0x30af2d69
- (BOOL)shouldContainIMHandle:(id)handle;	// 0x30af2d95
@end

