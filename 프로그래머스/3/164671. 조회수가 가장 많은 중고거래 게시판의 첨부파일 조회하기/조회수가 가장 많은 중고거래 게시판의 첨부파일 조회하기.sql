-- 코드를 입력하세요
SELECT 
concat('/home/grep/src/', b.board_id, '/', f.file_id, f.file_name, file_Ext) as file_path
from used_goods_board b
inner join used_goods_file f
on b.board_id = f.board_id
where views = (
                    select max(views)
                    from used_goods_board
                )
order by f.file_id desc