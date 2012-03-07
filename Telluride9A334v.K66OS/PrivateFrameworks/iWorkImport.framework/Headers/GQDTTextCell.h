/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "iWorkImport-Structs.h"

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell {
@private
	CFStringRef mStringValue;	// 16 = 0x10
	GQDWPLayoutStorage *mLayoutStorage;	// 20 = 0x14
}
- (void)dealloc;	// 0x32be5335
- (id)layoutStorage;	// 0x32be5221
- (int)readContentForTCell:(xmlTextReader *)tcell;	// 0x32be55f5
- (int)readContentForTextCell:(xmlTextReader *)textCell;	// 0x32be55bd
- (CFStringRef)stringValue;	// 0x32be5211
@end
