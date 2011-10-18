/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_validSyncToken;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_noUIDConflict;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_validAddressData;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_maxResourceSize;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_uid;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_ctagOkay;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_maxImageSize;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_invalidImageType;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_imageError;	// 60 = 0x3c
	CoreDAVLeafItem *_status;	// 64 = 0x40
}
@property(retain) CoreDAVItemWithNoChildren *ctagOkay;	// G=0x3005d941; S=0x3005d955; @synthesize=_ctagOkay
@property(retain) CoreDAVItemWithNoChildren *imageError;	// G=0x3005d9e9; S=0x3005d9fd; @synthesize=_imageError
@property(retain) CoreDAVItemWithNoChildren *invalidImageType;	// G=0x3005d9b1; S=0x3005d9c5; @synthesize=_invalidImageType
@property(retain) CoreDAVItemWithNoChildren *maxImageSize;	// G=0x3005d979; S=0x3005d98d; @synthesize=_maxImageSize
@property(retain) CoreDAVItemWithNoChildren *maxResourceSize;	// G=0x3005d8d1; S=0x3005d8e5; @synthesize=_maxResourceSize
@property(retain) CoreDAVItemWithNoChildren *noUIDConflict;	// G=0x3005d861; S=0x3005d875; @synthesize=_noUIDConflict
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;	// G=0x3005d7f1; S=0x3005d805; @synthesize=_numberOfMatchesWithinLimits
@property(retain) CoreDAVLeafItem *status;	// G=0x3005da21; S=0x3005da35; @synthesize=_status
@property(retain) CoreDAVItemWithNoChildren *uid;	// G=0x3005d909; S=0x3005d91d; @synthesize=_uid
@property(retain) CoreDAVItemWithNoChildren *validAddressData;	// G=0x3005d899; S=0x3005d8ad; @synthesize=_validAddressData
@property(retain) CoreDAVItemWithNoChildren *validSyncToken;	// G=0x3005d829; S=0x3005d83d; @synthesize=_validSyncToken
- (id)init;	// 0x3005cca5
- (id)copyParseRules;	// 0x3005d0f1
// declared property getter: - (id)ctagOkay;	// 0x3005d941
- (void)dealloc;	// 0x3005ccd1
- (id)description;	// 0x3005cde5
// declared property getter: - (id)imageError;	// 0x3005d9e9
// declared property getter: - (id)invalidImageType;	// 0x3005d9b1
// declared property getter: - (id)maxImageSize;	// 0x3005d979
// declared property getter: - (id)maxResourceSize;	// 0x3005d8d1
// declared property getter: - (id)noUIDConflict;	// 0x3005d861
// declared property getter: - (id)numberOfMatchesWithinLimits;	// 0x3005d7f1
// declared property setter: - (void)setCtagOkay:(id)okay;	// 0x3005d955
// declared property setter: - (void)setImageError:(id)error;	// 0x3005d9fd
// declared property setter: - (void)setInvalidImageType:(id)type;	// 0x3005d9c5
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x3005d98d
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x3005d8e5
// declared property setter: - (void)setNoUIDConflict:(id)conflict;	// 0x3005d875
// declared property setter: - (void)setNumberOfMatchesWithinLimits:(id)matchesWithinLimits;	// 0x3005d805
// declared property setter: - (void)setStatus:(id)status;	// 0x3005da35
// declared property setter: - (void)setUid:(id)uid;	// 0x3005d91d
// declared property setter: - (void)setValidAddressData:(id)data;	// 0x3005d8ad
// declared property setter: - (void)setValidSyncToken:(id)token;	// 0x3005d83d
// declared property getter: - (id)status;	// 0x3005da21
// declared property getter: - (id)uid;	// 0x3005d909
// declared property getter: - (id)validAddressData;	// 0x3005d899
// declared property getter: - (id)validSyncToken;	// 0x3005d829
@end

