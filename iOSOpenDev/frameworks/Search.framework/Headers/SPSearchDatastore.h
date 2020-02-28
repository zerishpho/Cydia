/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */




@protocol SPSearchDatastore <NSObject>
- (id)displayIdentifierForDomain:(unsigned)domain;
- (id)searchDomains;
- (void)performQuery:(id)query withResultsPipe:(id)resultsPipe;
@optional
- (void *)copyResultForIdentifier:(id)identifier domain:(unsigned)domain;
- (id)categoryForDomain:(unsigned)domain;
@end
