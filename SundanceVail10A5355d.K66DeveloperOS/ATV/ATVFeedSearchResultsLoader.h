/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, ATVMerchant, NSDictionary, ATVFeedDocument, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchResultsLoader : XXUnknownSuperclass {
	ATVURLDocument *_document;	// 4 = 0x4
	NSString *_baseURLString;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	NSDictionary *_results;	// 20 = 0x14
	ATVFeedDocument *_resultsFeedDocument;	// 24 = 0x18
}
@property(readonly, assign) NSDictionary *results;	// G=0x13d361; @synthesize=_results
@property(readonly, assign) ATVFeedDocument *resultsFeedDocument;	// G=0x13d375; @synthesize=_resultsFeedDocument
@property(readonly, assign) NSString *searchTerm;	// G=0x13d34d; @synthesize=_searchTerm
- (id)initWithSearchTerm:(id)searchTerm baseURLString:(id)string merchant:(id)merchant;	// 0x13cb6d
- (id)_escapedSearchStringForString:(id)string;	// 0x13cd61
- (void)_loadResultsFromURL:(id)url;	// 0x13ce51
- (void)_setDocument:(id)document;	// 0x13cee1
- (void)dealloc;	// 0x13cbfd
- (void)load;	// 0x13ccdd
// declared property getter: - (id)results;	// 0x13d361
// declared property getter: - (id)resultsFeedDocument;	// 0x13d375
// declared property getter: - (id)searchTerm;	// 0x13d34d
@end

