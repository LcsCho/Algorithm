-- 코드를 입력하세요
SELECT U.USER_ID, U.NICKNAME, 
    concat(u.city, ' ', u.street_address1, ' ', u.street_address2) as 전체주소,
    CONCAT(SUBSTRING(u.tlno, 1, 3), '-', SUBSTRING(U.TLNO, 4, 4), '-', SUBSTRING(U.TLNO, 8, 4))  AS 전화번호
from
    used_goods_board b
    inner join used_goods_user u
    on b.writer_id = u.user_id
GROUP BY b.writer_id
HAVING COUNT(*) >= 3
ORDER BY u.user_id desc