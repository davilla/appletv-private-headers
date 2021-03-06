/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSMetadataQuery;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataQueryMonitor : NSObject {
@private
	NSMetadataQuery *_query;	// 4 = 0x4
	NSURL *_ubiquityRootURL;	// 8 = 0x8
}
@property(readonly, assign) NSMetadataQuery *query;	// G=0x32c0aa41; @synthesize=_query
@property(readonly, assign) NSURL *ubiquityRootURL;	// G=0x32c0aa31; @synthesize=_ubiquityRootURL
+ (void)initialize;	// 0x32c0ab9d
- (id)init;	// 0x32c0aa51
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x32c0b1a9
- (void)dealloc;	// 0x32c0b0e1
- (id)description;	// 0x32c0b069
- (void)pollForNewFiles:(id)newFiles;	// 0x32c0abe5
// declared property getter: - (id)query;	// 0x32c0aa41
- (void)startMonitoringQuery;	// 0x32c0b011
// declared property getter: - (id)ubiquityRootURL;	// 0x32c0aa31
@end

