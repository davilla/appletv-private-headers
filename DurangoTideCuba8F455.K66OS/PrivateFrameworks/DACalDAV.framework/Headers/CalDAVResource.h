/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, CalDAVScheduleChangesProperty, NSData;

@interface CalDAVResource : NSObject {
	NSString *_filename;	// 4 = 0x4
	NSString *_etag;	// 8 = 0x8
	NSString *_scheduleTag;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	CalDAVScheduleChangesProperty *_scheduleChanges;	// 20 = 0x14
}
@property(retain) NSData *data;	// G=0x31456e21; S=0x31456ed5; @synthesize=_data
@property(retain) NSString *etag;	// G=0x31456df1; S=0x31456e7d; @synthesize=_etag
@property(retain) NSString *filename;	// G=0x31456dd9; S=0x31456e51; @synthesize=_filename
@property(retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x31456e39; S=0x31456f01; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x31456e09; S=0x31456ea9; @synthesize=_scheduleTag
// declared property getter: - (id)data;	// 0x31456e21
- (void)dealloc;	// 0x31456d49
// declared property getter: - (id)etag;	// 0x31456df1
// declared property getter: - (id)filename;	// 0x31456dd9
// declared property getter: - (id)scheduleChanges;	// 0x31456e39
// declared property getter: - (id)scheduleTag;	// 0x31456e09
// declared property setter: - (void)setData:(id)data;	// 0x31456ed5
// declared property setter: - (void)setEtag:(id)etag;	// 0x31456e7d
// declared property setter: - (void)setFilename:(id)filename;	// 0x31456e51
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x31456f01
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x31456ea9
@end

