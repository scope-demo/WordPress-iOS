#import <UIKit/UIKit.h>
#import <WordPressShared/WPTableViewCell.h>

@interface RelatedPostsPreviewTableViewCell : WPTableViewCell

@property (nonatomic, assign) BOOL enabledHeader;
@property (nonatomic, assign) BOOL enabledImages;

- (CGFloat)heightForWidth:(CGFloat)availableWidth;

@end
