Pod::Spec.new do |s|
  s.name     = 'FLPReader'
  s.version  = '2.9.1'
  s.license  = 'MIT' 
  s.summary  = 'An open source PDF file reader/viewer for iOS.'
  s.homepage = 'http://www.vfr.org/'
  s.author   = { 'Julius Oklamcak' => 'joklamcak@gmail.com', 'Flip Studio' => 'flipstudio@flipstudio.net' }

  s.source   = { :git => 'https://github.com/flipstudio/Reader.git', :tag => "v#{s.version}" }

  s.platform = :ios
  s.ios.deployment_target = '6.0'

  s.source_files = 'Sources/*.{h,m}'

  s.resources = "Resources/**/*.{pdf,srings}"
  s.resources = "Graphics/*.png"

  s.frameworks = 'UIKit', 'Foundation', 'CoreGraphics', 'QuartzCore', 'ImageIO', 'MessageUI'
  s.requires_arc = true
end
