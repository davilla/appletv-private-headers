/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDWPTextLabel;

__attribute__((visibility("hidden")))
@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable> {
@private
	int mType;	// 4 = 0x4
	GQDWPTextLabel *mLabel;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x30482bed
- (void)dealloc;	// 0x30482c19
- (id)label;	// 0x30482c09
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x30482c65
- (int)type;	// 0x30482bf9
@end

