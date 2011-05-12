/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationshipCollection : NSObject {
@private
	NSMutableDictionary *mIdentifierMap;	// 4 = 0x4
	NSMutableDictionary *mTypeMap;	// 8 = 0x8
}
- (id)initWithRelationshipsXml:(xmlDoc *)relationshipsXml baseLocation:(id)location;	// 0x34505371
- (void)dealloc;	// 0x3451dc2d
- (id)relationshipForIdentifier:(id)identifier;	// 0x345132f9
- (id)relationshipsByType:(id)type;	// 0x34507399
@end

